function validateForm() {
  var email = document.getElementById("Email").value;
  var userName = document.getElementById("Username").value;
  var password = document.getElementById("Password").value;
  var confirmPassword = document.getElementById("confirm").value;
  var agreement = document.getElementById("agreement").checked;

  var errorMessages = [];

  if (email === "") {
    errorMessages.push("Email is required.");
  } else if (!isValidEmail(email)) {
    errorMessages.push("Email is not in a valid format.");
  }

  if (userName === "") {
    errorMessages.push("Username is required.");
  }

  if (password === "") {
    errorMessages.push("Password is required.");
  } else if (password.length < 6 || password.length > 32) {
    errorMessages.push("Password must be between 6 and 32 characters.");
  }

  if (confirmPassword === "") {
    errorMessages.push("Please confirm your password.");
  } else if (password !== confirmPassword) 
  {
    errorMessages.push("Passwords do not match.");
  }

  if (!agreement) {
    errorMessages.push("Please agree to the terms of service and privacy policy.");
  }

  var errorMessage = errorMessages.join("\n");
  if (errorMessage !== "") {
    alert(errorMessage);
    return false; // Prevent form submission
  } else {
    alert("Form submitted successfully.");
    return true; // Allow form submission
  }
}

function isValidEmail(email) {
  var emailRegex = /^[^\s@]+@[^\s@]+\.[^\s@]+$/;
  return emailRegex.test(email);
}