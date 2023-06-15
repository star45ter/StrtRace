<?php
    $con = mysqli_connect("127.0.0.1:3307", "root", "", "chrono");



if ($con->connect_error) {
  die("Connection failed: " . $con->connect_error);
}

$sql = "SELECT * FROM tempchrono ORDER BY id DESC LIMIT 1";
$result = $con->query($sql);

if ($result->num_rows > 0) {
  // output data of each row
  while($row = $result->fetch_assoc()) {
    echo $row["tempchrono"];
  }
} else {
  echo "0:00:000";
}
$con->close();
    
  
?>