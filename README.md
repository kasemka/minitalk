# 03_minitalk_mandatory

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

# 03_minitalk_bonus

A small reception acknowledgment system was add to mandatory part.
Supports Unicode characters
