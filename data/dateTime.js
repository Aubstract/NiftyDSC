function sendCurrentDateTime() {
    const proc_now = performance.now();
    const now = new Date();
    const formattedDateTime = now.toISOString(); // Format for server processing
  
    fetch('/date-time', { // Path to the server-side endpoint
      method: 'POST',
      headers: {
        'Content-Type': 'application/x-www-form-urlencoded'
      },
      body: `dateTime=${formattedDateTime} & elapsedTime=${proc_now}`
    })
    .then(response => response.text())
    .then(data => {
      console.log(data);
    })
    .catch(error => {
      console.error(error);
    });
  }
  