<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0" />
    <title>Signup</title>
    <link rel="stylesheet" href="styles/login.css" />
    <link href="https://api.fontshare.com/v2/css?f[]=gambetta@400,1,300,600,701,2,501,401,301,601,500,700&display=swap" rel="stylesheet" />
    <link href="https://api.fontshare.com/v2/css?f[]=satoshi@1,900,700,500,301,701,300,501,401,901,400,2&display=swap" rel="stylesheet" />
    <link rel="stylesheet" href="../css/signup.css" />
</head>
<body>
    
    <?php
    session_start();

    if (isset($_SESSION["emailErr"])) {
        echo '<script>alert("' . $_SESSION["emailErr"] . '");</script>';
        unset($_SESSION["emailErr"]);
    }

    if (isset($_SESSION["usernameErr"])) {
        echo '<script>alert("' . $_SESSION["usernameErr"] . '");</script>';
        unset($_SESSION["usernameErr"]);
    }

    if (isset($_SESSION["passwordErr"])) {
        echo '<script>alert("' . $_SESSION["passwordErr"] . '");</script>';
        unset($_SESSION["passwordErr"]);
    }

    if (isset($_SESSION["confirmErr"])) {
        echo '<script>alert("' . $_SESSION["confirmErr"] . '");</script>';
        unset($_SESSION["confirmErr"]);
    }

    if (isset($_SESSION["successMessage"])) {
        echo '<script>alert("' . $_SESSION["successMessage"] . '");</script>';
        unset($_SESSION["successMessage"]);
    }

    if (isset($_SESSION["errorMessage"])) {
        echo '<script>alert("' . $_SESSION["errorMessage"] . '");</script>';
        unset($_SESSION["errorMessage"]);
    }
    ?>
    <header>
        <div class="logo">
            <div>
                <img class="EthLogo" src="../images/logo-transparent-png.png" alt="EthiopiaLogo" />
            </div>
        </div>
    </header>

    <div class="wrapper">
        <h1>Signup</h1>
        <form action="signupBackend.php" method="post">
            
            <input name="email" id="Email" type="email" placeholder="Enter your email" />
            <input name="username" id="Username" type="text" placeholder="Create Username" />
            <input name="password" id="Password" type="password" placeholder="Create Password" />
            <input name="confirm" id="confirm" type="password" placeholder="Confirm Password" />
            <br />
            <input type="checkbox" id="agreement" />
            <label for="agreement">I have read and agreed to the <a href="#" style="color: #5c2c00">Terms of Service</a> and <a href="#" style="color: #5c2c00">Privacy Policy</a>.</label>
            <input class="btn" type="submit" value="Sign up" />
        </form>
        <div class="login">
            <h3>Already have an account? <a href="login.html">Login</a></h3>
        </div>
    </div>

    <footer>
        <div class="footerContainer">
            <div class="socialIcons">
                <a href="#"><i class="fab fa-facebook"></i></a>
                <a href="#"><i class="fab fa-instagram"></i></a>
                <a href="#"><i class="fab fa-twitter"></i></a>
                <a href="#"><i class="fab fa-google-plus"></i></a>
                <a href="#"><i class="fab fa-youtube"></i></a>
            </div>
            <div class="footerNav">
                <ul>
                    <li><a href="#">Home</a></li>
                    <li><a href="#">About</a></li>
                    <li><a href="#">Contact Us</a></li>
                    <li><a href="#">Our Team</a></li>
                    <li><a href="#">Privacy Policy</a></li>
                </ul>
            </div>
        </div>
        <div class="footerBottom">
            <p>
                Copyright &copy; 2024; Designed by <span class="designer">YeKolo Coders</span>
            </p>
        </div>
    </footer>
</body>
</html>