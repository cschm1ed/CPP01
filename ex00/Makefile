#**************************************************************************** #
# #
# :: : :: :: :: ::#
#Makefile : + : : + : : + : #
#+ : + + : + + : + #
#By : cschmied < cschmied @student .42wolfsburg.de + # + + : + +# + #
#+ #+ #+ #+ #+ #+ + #+ #
#Created : 2023 / 06 / 18 12 : 40 : 17 by cschmied # + # # + # #
#Updated : 2023 / 06 / 18 12 : 40 : 20 by cschmied## # ########.fr #
# #
#**************************************************************************** #

NAME := brainz

           SRCS := main.cpp newZombie.cpp randomChump.cpp Zombie.cpp

                        OBJS := $(SRCS
                                   :.cpp =.o)

                                   CFLAGS := -Wall - Werror - Wextra - std =
                                                  c++ 98 - fsanitize = address

                                                      CC := g++

                                                             $(NAME)
    : $(OBJS) $(CC) $(CFLAGS) $ ^ -o $ @

                                              %.o
    : %.cpp $(CC) $(CFLAGS) - c $ < -o $ @

                                              .PHONY : clean all re fclean

                                                           clean : rm -
                                          rf $(OBJS)

                                              fclean : clean rm -
                                                       rf $(NAME)

                                                           re : fclean all

                                                                    all
    : $(NAME)
