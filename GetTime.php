<?php
    $con = mysqli_connect("127.0.0.1:3307", "root", "", "chrono");
   
    
    $time = $_GET["time"];
    $time = $con->real_escape_string($time);

    $con->query("INSERT INTO tempchrono (tempchrono)
    VALUES ('$time')");
    
    echo "ok";


?>