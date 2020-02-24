NAME = block_exe
CC = g++
RM = rm -rf

INC_PATH += ./includes

INC_NAME += block.h
INC_NAME += blockchain.h
INC_NAME += sha256.h
INC_NAME += match.h
INC_NAME += team.h

CFLAGS = -Wall -Werror -Wextra -std=c++11 -stdlib=libc++ -x c++
INC = $(addprefix $(INC_PATH)/,$(INC_NAME))

CPPFLAGS = $(addprefix -I,$(INC_PATH))

SRC_PATH = srcs
SRC_NAME += main.cpp

SRC_SUB += Blockchain
SRC_NAME += block.cpp
SRC_NAME += blockchain.cpp

SRC_SUB += Crypt
SRC_NAME += sha256.cpp

SRC_SUB += Match
SRC_NAME += match.cpp
SRC_NAME += team.cpp

vpath %.cpp $(SRC_PATH) $(addprefix $(SRC_PATH)/, $(SRC_SUB))

OBJ_PATH = obj
OBJ_NAME = $(SRC_NAME:%.cpp=%.o)
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME)) 


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ $(LDFLAGS) -o $@

$(OBJ): $(INC) | $(OBJ_PATH)
$(OBJ): $(OBJ_PATH)/%.o: %.cpp
	$(CC) $(CFLAGS) $(CPPFLAGS) -o $@ -c $<

$(OBJ_PATH):
	mkdir -p $@

clean:
	$(RM) $(OBJ_PATH)

fclean: clean
	$(RM) $(NAME)

re: fclean all


.PHONY: all clean fclean re test