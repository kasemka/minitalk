## minitalk

Creating a communication program between the client and the server. The client sends the text to the server, and the server prints it.

### detailes

The server is launched first, and after being launched it displays its PID.

The client needs as arguments the server PID and the text that should be sent (run in another terminal).

Once the string has been received, the server displays it. The server must be able to display big text pretty quickly.

The server must be able to receive text from several clients in a row, without needing to be restarted.

Communication is working by sending two signals: SIGUSR1 and SIGUSR2.

![server1](https://user-images.githubusercontent.com/83021442/125605557-292d29fb-b043-40db-9bea-06f7b2f9c2b1.jpeg)

![client1](https://user-images.githubusercontent.com/83021442/125605623-f9c49fdd-9cc3-44d8-9564-a248aa040b32.jpeg)

![server2](https://user-images.githubusercontent.com/83021442/125605587-4e8dbabe-854e-40c7-9d85-fbf4f6972e68.jpeg)


## minitalk bonus part

A small reception acknowledgment system was added to the previous part.

Supports Unicode characters

![client2](https://user-images.githubusercontent.com/83021442/125605636-157db784-e4aa-4830-b060-80a8011fe3aa.jpeg)  

<!--Detailed information is in [en.subject_minitalk.pdf](https://github.com/lelle-asem/03_minitalk/blob/master/en.subject_minitalk.pdf)-->
