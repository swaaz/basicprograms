document.addEventListener('DOMContentLoaded', () => {
  // get form element
  const formElement = document.querySelector('#form');

  // add event for submit form
  formElement.addEventListener('submit', (e) => {
    e.preventDefault();

    // email regex for check email
    const emailRegex = /^(([^<>()\[\]\\.,;:\s@"]+(\.[^<>()\[\]\\.,;:\s@"]+)*)|(".+"))@((\[[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\.[0-9]{1,3}\])|(([a-zA-Z\-0-9]+\.)+[a-zA-Z]{2,}))$/;
    
    // make form data
    const formData = new FormData(formElement);
    
    // get data
    const name = formData.get('user_name');
    const email = formData.get('user_email');
    const password = formData.get('user_password');

    if (!name) {
      alert('Name field is empty. Please fill it');
    } else if (!email) {
      alert('Email field is empty. Please fill it');
    } else if (!emailRegex.test(email)) {
      alert('Email is not valid');
    } else if (!password) {
      alert('Password field is empty. Please fill it');
    } else if (password.length < 8) {
      alert('Password minimal 8 character');
    } else {
      alert('Success');
      alert(`Welcome ${name}`);

      // clear form
      formElement.reset();
    }

  });

  togglePassword();
});

const togglePassword = () => {
  // toggle password
  const passwordInput = document.querySelector('#user_password');
  const passwordToggle = document.querySelector('#toggle_password');

  passwordToggle.addEventListener('click', () => {
    if (passwordInput.type === 'password') {
      passwordInput.type = 'text';
    } else {
      passwordInput.type = 'password';
    }
  });
}
