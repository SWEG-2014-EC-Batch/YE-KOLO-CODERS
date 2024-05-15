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
    if (empty($_POST["email"])) {
        $_SESSION["emailErr"] = "Email is required";
    } else {
        $email = test_input($_POST["email"]);

        if (!filter_var($email, FILTER_VALIDATE_EMAIL)) {
            $_SESSION["emailErr"] = "Invalid email format";
        }
    }
    if (empty($_POST["username"])) {
        $_SESSION["usernameErr"] = "Username is required";
    } else {
        $username = test_input($_POST["username"]);
    }
    if (empty($_POST["password"])) {
        $_SESSION["passwordErr"] = "Password is required";
    } else {
        $password = test_input($_POST["password"]);
    }
    if (empty($_POST["confirm"])) {
        $_SESSION["confirmErr"] = "Please confirm the password";
    } else {
        $confirm = test_input($_POST["confirm"]);
        if ($confirm !== $password) {
            $_SESSION["confirmErr"] = "Passwords do not match";
        }
    }

    if (empty($_SESSION["emailErr"]) && empty($_SESSION["usernameErr"]) && empty($_SESSION["passwordErr"]) && empty($_SESSION["confirmErr"])) {
        $sql = "INSERT INTO information (email, user_name, password) VALUES ('$email', '$username', '$password')";

        if ($conn->query($sql) === TRUE) {
            $_SESSION["successMessage"] = "User information inserted successfully.";
        } else {
            $_SESSION["errorMessage"] = "Error: " . $sql . "<br>" . $conn->error;
        }
    }

    header("Location: signup.php");
    exit();
}

$conn->close();

function test_input($data) {
    $data = trim($data);
    $data = stripslashes($data);
    $data = htmlspecialchars($data);
    return $data;
}
?>