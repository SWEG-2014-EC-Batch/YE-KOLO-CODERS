function submitForm() {
    var fullName = document.getElementById('fullName').value;
    var email = document.getElementById('email').value;
    var phoneNumber = document.getElementById('phoneNumber').value;
    var message = document.getElementById('message').value;
    var consent = document.getElementById('consent').checked;
    var messages = []; // Array to store error messages

    // Check if all required fields are filled and consent is given
    if (fullName === '' || email === '' || message === '' || !consent) {
      alert('Please fill in all required fields and agree to the privacy policy.');
      return;
    }
  
    // Validate phone number
    if (!isValidPhoneNumber(phoneNumber)) {
      alert('Please enter a valid 10-digit phone number.');
      return;
    }

    // Additional checks
    if (fullName === '' || fullName === null) {
        messages.push("Name is required.");
    }
    if (message.length < 10 || message.length > 100) {
        messages.push("Message must be between 10 and 100 characters.");
    }
    
    if (phoneNumber.length !== 10) {
        messages.push("Your phone number must be 10 digits.");
    }

    // If there are error messages, alert them
    if (messages.length > 0) {
        alert(messages.join("\n"));
        return;
    }
  
    // If all requirements are met, proceed with form submission
    alert('Form submitted successfully!');
    document.getElementById('fullName').value = '';
    document.getElementById('email').value = '';
    document.getElementById('phoneNumber').value = '';
    document.getElementById('message').value = '';
    document.getElementById('consent').checked = false;
}

// Function to validate phone number
function isValidPhoneNumber(phoneNumber) {
    // Remove non-numeric characters
    phoneNumber = phoneNumber.replace(/\D/g, '');
    // Check if phone number has exactly 10 digits
    return phoneNumber.length === 10;
}
