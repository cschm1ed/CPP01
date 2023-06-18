#**************************************************************************** #
# #
# :: : :: :: :: ::#
#Makefile : + : : + : : + : #
#+ : + + : + + : + #
#By : cschmied < cschmied @student .42wolfsburg.de + # + + : + +# + #
#+ #+ #+ #+ #+ #+ + #+ #
#Created : 2023 / 06 / 18 12 : 42 : 01 by cschmied # + # # + # #
#Updated : 2023 / 06 / 18 12 : 42 : 01 by cschmied## # ########.fr #
# #
#**************************************************************************** #

NAME := brain

           SRCS := main.cpp

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
