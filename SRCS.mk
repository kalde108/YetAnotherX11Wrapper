SRCS_DIR = srcs/
SRC = \
	placeholder \
	get_display \


# example of how to add a directory
# SRC += $(addprefix $(CLIENT_DIR), $(CLIENT_SRC))
# CLIENT_DIR=Client/

# CLIENT_SRC = \
# 	Client \
# 	Client-errorPages \
# 	Client-parse \

SRCS := $(addsuffix .cpp, $(SRC))