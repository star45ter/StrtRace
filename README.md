# StrtRace *A little project to build a street racing interface*

#### WARNING THIS PROJECT IS A PAIN IN THE ASS TO SETUP!!!!!!! 
But go ahead it's fun.


1) BUILD THE CAPTOR FOLLOWING THE BLUEPRINT
2) INSTALL THE APK
3) INSTALL XAMPP https://www.apachefriends.org/fr/index.html
4) SETUP A XAMPP SERVER (HTTP port:80,443 SQL port:3307  DON'T FORGET TO OPEN THEM)
5) IN THE HTDOCS FOLDER PUT (GetImportantTime.php / GetInstantTimer.php / GetPb.php / GetRaces.php / GetTime.php / Savetime.php)
6) CREATE THE FOLLOWING SQL DATABASE STRUCTURE IN THE XAMPP SERVER:

```
chrono
    -->chrono
        -->track	TYPE:text
        -->chrono	TYPE:varchar(10)
        -->driver	TYPE:varchar(20)
    -->races
        -->name	TYPE:varchar(20)
        -->distance	TYPE:float
        -->place	TYPE:text
    -->tempchrono
        -->id   TYPE:int(11) AUTO_INCREMENT
        -->tempchrono	TYPE:varchar(10)
```
7) IN THE RACES TABLE CREATE ALL THE RACES YOU WANT TO ADD ( INSERT INTO races VALUES("RACE NAME","DISTANCE IN KM","NAME OF THE TOWN"); )
8) IN THE XAMPP HTDOCS FOLDER ADD A PICTURE OF THE RACE COURSE WITH THE EXACT NAME YOU PUT IN THE TABLE ( this step is not mendatory )
9) UPLOAD sketch_strt.ino INTO YOUR ARDUINO
10) INSTALL NODE.JS https://nodejs.org/en
11) CREATE A FOLDER FOR THE NODE SERVER
12) UNZIP THE "SERVER.ZIP" INSIDE
13) OPEN "arduino.js" AND CHANGE THE VAR "usbserial" TO THE PORT WHERE YOUR ARDUINO IS CONNECTED
14) OPEN YOUR CMD ON WINDOWS 
15) ENTER "cd C:/WHEREYOURFOLDERIS"
16) PLACE THE SENSOR FACING THE ROAD WITHOUT A CAR
17) ENTER "node arduino.js"
18) LAUNCH THE APP
19) ENTER YOUR IPV4 IN THE APP ( https://whatismyipaddress.com/ )
20) RACE





![alt text]([http://url/to/img.png](https://raw.githubusercontent.com/star45ter/StrtRace/main/fuckinsliding_logo.png)https://raw.githubusercontent.com/star45ter/StrtRace/main/fuckinsliding_logo.png)
