# Aim
 The main objective of this project is to design and implement a reliable up-down counter using the ESP32 DOIT DevKit V1 and a 7-segment display. The counter is designed to increment or decrease its count based on user input, which can be provided either through physical button presses or wirelessly using a connected mobile application. 
# Components

1. ESP32 DOIT DevKit V1(30 pins).
    
2. 7-segment display(Cathode).
    
3. 1000 ohm resistors.
    
4. 4-pin Pushbuttons.
    
5. Connecting wires.
    

# Schematic

The main component was the ESP32 kit, and as there’s different variations of it, here’s the exact pin layout we followed

![](https://lh7-us.googleusercontent.com/docsz/AD_4nXfLzK8OF0FPkOdV5ygI_FHcyJOlfQzhyPRqNwliOGo1g4b7zjPNfVEMx2EvnX6ujN64wRG_nuTbOYjLQpK2kj8ad3M29dpZEDKdZ-lMG09DiWEn3FxCtOAtJCqHRde8-U9f0WcReUgdroolGVO3Ap58SKr-?key=lg_Zx1rWpAAsjDSKbThRrg)

  

The simulation for this project was done on the [Wokwi]([counter - Wokwi ESP32, STM32, Arduino Simulator](https://wokwi.com/projects/396876442113918977)) IOT project simulator. The following figure contains the schematic

  

![](https://lh7-us.googleusercontent.com/docsz/AD_4nXdZF-gE6KrZDeC6Mu7xtqIjtWDjD_tsjH0F5PYTXvXGL4wN1_vQqVVtIhWhro5LDm6MNOSB3DM5OzK9UlBOdFBE3IoGq23cCk2vig04ln2RRzEWSg9GLD8lanF8aLm3cZWYtbvnxFuCmM1MIuhEXtM5S4SZ?key=lg_Zx1rWpAAsjDSKbThRrg)
   

# Mobile app configuration
    
Using the MIT app inventor, the app was made with the Bluetooth module in the board

1st: the blocks corresponding to the code

![](https://lh7-us.googleusercontent.com/docsz/AD_4nXdkn0Kq8HQrqLS9nVhpbLg9CnIpAzyFdCYl1VbmhcoVZAqmJC4CT6-QF0nWX-ZBHpLH03HzPBXK6MCLGroJfMCII6oopMlonieRDjwnC6n9gWSrRdLQUnNyHggH-yahn815RaJAByG8Wn-fwJiBjLY5ZLg?key=lg_Zx1rWpAAsjDSKbThRrg)

![](https://lh7-us.googleusercontent.com/docsz/AD_4nXdc7eyukzSNm7zSufY5GkdpRFmY3GFVFjZxUEgIUOWEKhTn1ZqqANI9M1xVPZzIzIl1znYGtIprHXc3Z1UbdXGnjqi-1YG5kzJYtQSySTgQB36V0Odw9dOjSMEfkiqDf061fopjKINxCfsFdIq-bAKqbGOV?key=lg_Zx1rWpAAsjDSKbThRrg)

![](https://lh7-us.googleusercontent.com/docsz/AD_4nXfc2U1_t3Y6sZ3ksfE0Fe2fVDsUdY0BmZqDfZOzGGZbUqKMAqWHBgH6AxiXrF-Y4Zs2i97mnypDB9SI_CYookukqnW7oZR1rI7U6TcZn6999MRpADbVZNWILV7z223Ctq7AN5OIQSGtBfErkBkdQ8V5DCY?key=lg_Zx1rWpAAsjDSKbThRrg)

2nd: The UI of the app:

  

![](https://lh7-us.googleusercontent.com/docsz/AD_4nXdsZWVpZJ3p6YWPyMI-RrUbZ7oZhNJl1vtGrWo73bnUHp9CyzOH9xIkq48cL45HXVO9A-rthpvp9HyeUI0AbBydzQ5vHEPwXrxd_CiG0EQsNLGAxgtA4tHZ7yaJBCjMTRzRQHzajinTtNKR0tOecXm7zHZ6?key=lg_Zx1rWpAAsjDSKbThRrg)


***This project was made as a Team college project for Microprocessors course, Faculty of Engineering Alexandria University***
