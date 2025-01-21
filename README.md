# Réponse

[doc](https://www.te.com/commerce/DocumentDelivery/DDEController?Action=showdoc&DocId=Data+Sheet%7FHPC199_6%7FA6%7Fpdf%7FEnglish%7FENG_DS_HPC199_6_A6.pdf%7FCAT-HSC0004)

[github du driver](https://github.com/catie-aq/mbed_te-connectivity-htu21d/blob/main/src/htu21d.cpp)

```txt
-----
Temperature: 26.338066°C
Relative humidity: 31.422180%
-----
Temperature: 26.359517°C
Relative humidity: 31.124634%
-----
Temperature: 26.348792°C
Relative humidity: 30.979675%
-----
Temperature: 26.316616°C
Relative humidity: 30.949158%
-----
Temperature: 26.327341°C
Relative humidity: 30.880493%
-----
Temperature: 26.348792°C
Relative humidity: 30.827087%
-----
```


- 2.a 

```txt
After sending the start condition, the subsequent I²C header consist of a 7-bit I²C device address 0x40 and a DATA direction bit
(‘0’ for Write access : 0x80). The HTU21D(F) sensor indicates the proper reception of a byte by pulling the DATA pin low (ACK
bit) after the falling edge of the 8th SCK clock. After the issue of a measurement command (0xE3 for temperature, 0xE5 for
relative humidity), the MCU must wait for the measurement to complete. The basic commands are given in the table below:
```

Ox40 << 1 : Capteur address

- 2.b
Command 0xE3 for temperature 0xE5 for Humidity


- 2.c 
Registre sur 16 bits


