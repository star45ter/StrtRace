# StrtRace
A little project to build a street racing interface 
===================================================================

WARNING THIS PROJECT IS A PAIN IN THE ASS TO SETUP!!!!!!! 
But go ahead it's fun.

===================================================================
1.BUILD THE CAPTOR FOLLOWING THE BLUEPRINT
2.INSTALL THE APK
3.INSTALL XAMPP https://www.apachefriends.org/fr/index.html
4.SETUP A XAMPP SERVER (HTTP port:80,443 SQL port:3307)
5.IN THE HTDOCS FOLDER PUT (GetImportantTime.ph / GetInstantTimer.php / GetPb.php / GetTime.php)
6.OPEN EACH ONE OF THEM AND PUT THE REQUIRED INFO WHERE NEEDED
7.CREATE THE FOLLOWING SQL DATABASE STRUCTURE IN THE XAMPP SERVER:

chrono
    -->chrono
        -->track	TYPE:text
        -->chrono	TYPE:varchar(8)
        -->driver	TYPE:varchar(20)
    -->tempchrono
        -->id   TYPE:int(11) AUTO_INCREMENT
        -->tempchrono	TYPE:varchar(10)
        
8.UPLOAD sketch_strt.ino INTO YOUR ARDUINO
9.INSTALL NODE.JS
10.CREATE A FOLDER FOR THE NODE SERVER
11.UNZIP THE "SERVER.ZIP" INSIDE
12.OPEN "arduino.js" AND CHANGE THE VAR "usbserial" TO THE PORT WHERE YOUR ARDUINO IS CONNECTED
13.OPEN YOUR CMD ON WINDOWS 
14.ENTER "cd C:/WHEREYOURFOLDERIS"
15.ENTER "node arduino.js"
16.LUNCH THE APP 
17.RACE 
