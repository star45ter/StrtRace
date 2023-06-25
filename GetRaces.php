<?php
    $con = mysqli_connect("127.0.0.1:3307", "root", "", "chrono");

   


if ($con->connect_error) {
  die("Connection failed: " . $con->connect_error);
}

$sql = "SELECT * FROM races";
$result = $con->query($sql);

if ($result->num_rows > 0) {
  // output data of each row
  while($row = $result->fetch_assoc()) {
    echo $row["name"]."::".$row["distance"]."::".$row["place"]."::";
  }
} else {
  echo "N/A";
}
$con->close();
    
  
?>