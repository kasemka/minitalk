# minitalk mandatory

Creating a communication program in the form of a client and server.
The server is launched first, and after being launched it displays its PID.
The client takes as parameters:
• The server PID.
• The string that should be sent.
• The client communicates the string passed as a parameter to the server. Once the string has been received, the server displays it.
• Communication between programs is done using UNIX signals.
• The server must be able to display the string pretty quickly.
• Server receives strings from several clients in a row, without needing to be restarted.
• Only two signals (SIGUSR1 and SIGUSR2) are used.

![server1](https://user-images.githubusercontent.com/83021442/125605557-292d29fb-b043-40db-9bea-06f7b2f9c2b1.jpeg)

![client1](https://user-images.githubusercontent.com/83021442/125605623-f9c49fdd-9cc3-44d8-9564-a248aa040b32.jpeg)

![server2](https://user-images.githubusercontent.com/83021442/125605587-4e8dbabe-854e-40c7-9d85-fbf4f6972e68.jpeg)


# minitalk bonus part

A small reception acknowledgment system was added to mandatory part.
Supports Unicode characters

![client2](https://user-images.githubusercontent.com/83021442/125605636-157db784-e4aa-4830-b060-80a8011fe3aa.jpeg)  

Detailed information is in [en.subject_minitalk.pdf](https://github.com/lelle-asem/03_minitalk/blob/master/en.subject_minitalk.pdf)
