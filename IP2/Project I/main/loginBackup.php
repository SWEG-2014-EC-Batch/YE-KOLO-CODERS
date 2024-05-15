<?php
session_start();

$host = "localhost";
$username = "root";
$password = "";
$database = "userInformation";

$conn = new mysqli($host, $username, $password, $database);

if ($conn->connect_error) {
    die("Connection failed: " . $conn->connect_error);
}

if ($_SERVER["REQUEST_METHOD"] == "POST") {
    $email = test_input($_POST["email"]);
    $username = test_input($_POST["email"]); // Assuming the username is provided in the same field as the email

    if (empty($email) || empty($username)) {
        $_SESSION["emailErr"] = "Email or username is required";
    } else {
        if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
            $_SESSION["emailErr"] = "Invalid email format";
        }
    }

    if (empty($_POST["password"])) {
        $_SESSION["passwordErr"] = "Password is required";
    } else {
        $password = test_input($_POST["password"]);
    }

    if (empty($_SESSION["emailErr"]) && empty($_SESSION["passwordErr"])) {
        $sql = "SELECT * FROM information WHERE (email = '$email' OR username = '$username') AND password = '$password'";
        $result = $conn->query($sql);

        if ($result->num_rows == 1) {
            $_SESSION["successMessage"] = "Login successful.";
            header("Location: homepage.html");
            exit();
        } else {
            $_SESSION["errorMessage"] = "Invalid email, username, or password.";
            header("Location: login.php");
            exit();
        }
    } else {
        header("Location: login.php");
        exit();
    }
}

$conn->close();

function test_input($data) {
    $data = trim($data);
    $data = stripslashes($data);
    $data = htmlspecialchars($data);
    return $data;
}
?>