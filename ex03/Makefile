#**************************************************************************** #
# #
# :: : :: :: :: ::#
#Makefile : + : : + : : + : #
#+ : + + : + + : + #
#By : cschmied < cschmied @student .42wolfsburg.de + # + + : + +# + #
#+ #+ #+ #+ #+ #+ + #+ #
#Created : 2023 / 06 / 18 12 : 42 : 08 by cschmied # + # # + # #
#Updated : 2023 / 06 / 18 12 : 42 : 08 by cschmied## # ########.fr #
# #
#**************************************************************************** #

NAME := violence

           SRCS := main.cpp humanA.cpp humanB.cpp weapon.cpp

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
