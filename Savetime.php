<?php
    $con = mysqli_connect("127.0.0.1:3307", "root", "", "chrono");
   
    
    $time = $_POST["time"];
    $time = $con->real_escape_string($time);
    $username = $_POST["username"];
    $username = $con->real_escape_string($username);
    $track = $_POST["track"];
    $track = $con->real_escape_string($track);
    $con->query("INSERT INTO chrono VALUES ('$track','$time','$username')");
    
    echo "ok";


?>