function getLocation() {
    console.log("called getLocation()");
    if (navigator.geolocation) {
        console.log("navigator.geolocation is valid");
      navigator.geolocation.getCurrentPosition(showPosition, showError, {enableHighAccuracy: true});
    } else {
        console.log("navigator.geolocation is NOT valid");
      document.getElementById("location").innerHTML = "Geolocation is not supported by this browser.";
    }
  }
  
function showPosition(position) {
    const latitude = position.coords.latitude;
    const longitude = position.coords.longitude;

    // Send location data to server using a POST request
    fetch('/location', {
        method: 'POST',
        headers: {
        'Content-Type': 'application/x-www-form-urlencoded'
        },
        body: `latitude=${latitude}&longitude=${longitude}`
    })
    .then(response => response.text())
    .then(data => {
        console.log(data);
    })
    .catch(error => {
        console.error(error);
    });

    document.getElementById("location").innerHTML = "Latitude: " + latitude + "<br>Longitude: " + longitude;
}

function showError(error) {
    document.getElementById("location").innerHTML = "Error: " + error.message;
}
