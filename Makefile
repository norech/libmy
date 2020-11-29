##
## EPITECH PROJECT, 2020
## libmy
## File description:
## My library
##

CC = gcc

AR = ar rc

CFLAGS = -W -Wall -Werror -I./include -g3

CFLAGS_TEST = ${CFLAGS} -Wno-stringop-truncation -Wno-error=format -lcriterion --coverage

LFLAGS = \

LFLAGS_TEST = ${LFLAGS} -lcriterion

TESTDIR = ../../tests/lib/my

SRC =	src/my_bzero.c \
	src/my_char_in.c \
	src/my_compute_power_rec.c \
	src/my_compute_square_root.c \
	src/my_find_prime_sup.c \
	src/my_free_strarray.c \
	src/my_get_digit_char.c \
	src/my_getnbr.c \
	src/my_isneg.c \
	src/my_is_prime.c \
	src/my_numlen.c \
	src/my_printf.c \
	src/my_printf/my_printf_convert.c \
	src/my_printf/my_printf_parse_flags.c \
	src/my_printf/my_printf_parse_tokens.c \
	src/my_printf/my_printf_put_exp_lower.c \
	src/my_printf/my_printf_put_exp_upper.c \
	src/my_printf/my_printf_put_float.c \
	src/my_printf/my_printf_put_percent.c \
	src/my_printf/my_printf_put_nbr.c \
	src/my_printf/my_printf_put_unsigned_nbr.c \
	src/my_printf/my_printf_putchar.c \
	src/my_printf/my_printf_putstr.c \
	src/my_printf/my_printf_putstr_printable.c \
	src/my_printf/my_printf_put_binary.c \
	src/my_printf/my_printf_put_octal.c \
	src/my_printf/my_printf_put_hexa_lower.c \
	src/my_printf/my_printf_put_hexa_upper.c \
	src/my_printf/my_printf_putptr.c \
	src/my_putchar.c \
	src/my_put_digit.c \
	src/my_put_float.c \
	src/my_put_nbr.c \
	src/my_put_long_long_nbr.c \
	src/my_put_nbr_base.c \
	src/my_itoa.c \
	src/my_intlen.c \
	src/my_ultoa.c \
	src/my_ltoa.c \
	src/my_longlen.c \
	src/my_lltoa.c \
	src/my_longlonglen.c \
	src/my_float_to_exponent.c \
	src/my_size_t_to_string.c \
	src/my_size_t_len.c \
	src/my_putstr.c \
	src/my_revstr.c \
	src/my_showmem.c \
	src/my_showstr.c \
	src/my_show_word_array.c \
	src/my_sort_int_array.c \
	src/my_strcapitalize.c \
	src/my_strcat.c \
	src/my_strcmp.c \
	src/my_strcpy.c \
	src/my_str_deletepos.c \
	src/my_strdup.c \
	src/my_strndup.c \
	src/my_str_filter.c \
	src/my_strinvertcase.c \
	src/my_str_isalpha.c \
	src/my_str_islower.c \
	src/my_str_isnum.c \
	src/my_str_isprintable.c \
	src/my_str_isupper.c \
	src/my_strlen.c \
	src/my_strlowcase.c \
	src/my_strncat.c \
	src/my_strncmp.c \
	src/my_strncpy.c \
	src/my_strsplit.c \
	src/my_strstr.c \
	src/my_strupcase.c \
	src/my_swap.c \
	src/my_swap_ptr.c \
	src/my_strpad_start.c \
	src/my_strpad_end.c \
	src/my_round_float.c \
	src/my_parse_args.c \
	src/my_calloc.c \
	src/my_memcpy.c \
	src/my_memset.c \
	\
	src/my_linked_list/my_count_nodes.c \
	src/my_linked_list/my_find_previous_node.c \
	src/my_linked_list/my_get_last_node.c \
	src/my_linked_list/my_get_node_index.c \
	src/my_linked_list/my_insert_node.c \
	src/my_linked_list/my_pop_node.c \
	src/my_linked_list/my_push_node.c \
	src/my_linked_list/my_remove_node.c \
	src/my_linked_list/my_reverse_node.c \
	src/my_linked_list/my_shift_node.c \
	src/my_linked_list/my_swap_node_and_next.c \
	src/my_linked_list/my_unshift_node.c

TEST_FILES =	${TESTDIR}/test_my_printf.c \
		${TESTDIR}/test_my_putchar.c \
		${TESTDIR}/test_my_revstr.c \
		${TESTDIR}/test_my_strcapitalize.c \
		${TESTDIR}/test_my_strcat.c \
		${TESTDIR}/test_my_strcmp.c \
		${TESTDIR}/test_my_strcpy.c \
		${TESTDIR}/test_my_strdup.c \
		${TESTDIR}/test_my_str_isalpha.c \
		${TESTDIR}/test_my_str_islower.c \
		${TESTDIR}/test_my_str_isnum.c \
		${TESTDIR}/test_my_str_isprintable.c \
		${TESTDIR}/test_my_str_isupper.c \
		${TESTDIR}/test_my_strlowcase.c \
		${TESTDIR}/test_my_strncat.c \
		${TESTDIR}/test_my_strncmp.c \
		${TESTDIR}/test_my_strncpy.c \
		${TESTDIR}/test_my_strstr.c \
		${TESTDIR}/test_my_strupcase.c

OBJ = ${SRC:.c=.o}

TARGET = libmy.a

TARGET_TEST = unit_tests

all: build_all

build_all: ${OBJ}
	${AR} ${TARGET} ${OBJ}
	cp ${TARGET} ../
	mkdir -p ../../include
	ln -rsf ./include/my.h ../../include
	ln -rsf ./include/my_linked_list.h ../../include
	ln -rsf ./include/defmy.h ../../include

tests_run: clean_tests
	${CC} ${CFLAGS} ${CFLAGS_TEST} -o ${TARGET_TEST} ${SRC} ${TEST_FILES} ${LFLAGS}
	./${TARGET_TEST} --verbose

clean_tests:
	rm -rf ${TARGET_TEST}

coverage: test
	gcovr

clean:
	rm -f ${OBJ} *.gc* unit_test

fclean: clean
	rm -f ${TARGET}

re: fclean all
