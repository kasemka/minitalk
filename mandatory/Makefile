NAME = minitalk
SERVER = server
CLIENT = client

HEADER = minitalk.h
SERVER_SRC = server.c
CLIENT_SRC = client.c
SRC = ft_atoi.c\
	ft_putnbr_fd.c\
	ft_strlen.c\
	messages.c

SERVER_OBJS = $(SERVER_SRC:.c=.o)
CLIENT_OBJS = $(CLIENT_SRC:.c=.o)
OBJS = $(SRC:.c=.o)

CC = gcc
FLAGS = -Wall -Wextra -Werror

$(NAME): $(SERVER) $(CLIENT)

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c -o $@ $<

$(SERVER): $(SERVER_OBJS) $(OBJS)
	$(CC) -o $@ $^ $(FLAGS)

$(CLIENT): $(CLIENT_OBJS) $(OBJS)
	$(CC) -o $@ $^ $(FLAGS)

clean:
	rm -f $(SERVER_OBJS) $(CLIENT_OBJS) $(OBJS)

fclean:	clean
	rm -f $(SERVER) $(CLIENT)

re:	fclean all

.PHONY: all clean fclean re