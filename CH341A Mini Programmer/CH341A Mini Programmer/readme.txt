Software operation Note:
1. CH341A.EXE 24 \ 25 programmer software, the detection function is only auxiliary function, because some of the chip data can not be found,
Can not get the corresponding chip logo manufacturers \ chip ID information, which caused this function failed to improve, so some chips can not be detected,
So that the accuracy of the detection function is not 100%.

2. The detection of identification errors (referring to MX25L6445 identified as MX25L6405 and the like), such as MX25L6405 and MX25L6406, MX25L6445,
Three models of the chip device number is the same, so lead to misidentification.

3. When the detection target chip is "Unknown", does not mean that the programmer can not write. You can manually select the chip to write operation.
Such as the chip list does not correspond to the model, you can directly select the model \ brand, that is, select the same capacity can be.
One of the manufacturers in a "COMMON", on behalf of the general. Various brands of chip programming instructions are the same (except SST and ESMT).
So in the software model \ brand can only be regarded as a call, as long as the election on the chip capacity,
You can write directly (except SST and ESMT).

4. If the chip list, you do not need the model, you can choose a vendor in the COMMON, and then select your corresponding chip capacity can be.

5. When the last four lines of the contents of the detection information are displayed $ FF, indicating that the chip pin is not in good contact with the test seat, please check whether the chip or Weld and so on.

6. If you encounter the use of "automatic" button to write the chip, there prompted the "write timeout failure!" Error message. Then use the manual operation,
Click "erase" after the completion of the need to wait ten seconds, then click on the "(1) may be a separate chip compatibility issues, read and write to wait for a break time;
Cause 2 chip pin and the programmer test seat contact is not good, lead to the chip does not respond to the instructions issued by the computer).

7. In the process of reading and writing, do not recommend that you do other operations (such as browsing the web \ QQ \ download, etc.), may cause read and write data errors, resulting in data validation failure.
