/*
** bistromathique.h for bistromatique.h in /home/ustarr_r/rendu/Piscine_C_bistromathique/Robin
** 
** Made by Ustarroz Robin
** Login   <ustarr_r@epitech.net>
** 
** Started on  Wed Oct 28 11:58:35 2015 Ustarroz Robin
** Last update Sat Oct 31 10:35:28 2015 Ustarroz Robin
*/

#ifndef	BISTROMATHIQUE_H_
# define BISTROMATIQUE_H_


#define OP_STANDARD "()+-*/%"
#define SYNTAXE_ERROR_MSG "syntax error"
#define ERROR_MSG "Error"

struct s_nbr
{
  char *str;
  int	len;
  int	neg;
};
typedef struct s_nbr t_nbr;


int	eval_expr(char *, t_nbr *, int);
int	infinadd(t_nbr *, t_nbr *, t_nbr *, int);
int	infinmult(t_nbr*, t_nbr *, t_nbr *, int);
int	infindiv(t_nbr *, t_nbr *, t_nbr *, int);
int	infinmodu(t_nbr *, t_nbr *, t_nbr *, int);
void	my_putstr_error(char *str);
int	trad_base_to_ascii(char **av, char *buffer);
int	trad_ascii_to_base(char **av, t_nbr *res);
char	*buffer(char *str_size);
int	global_error(char **av, char *buffer);
int	check_base(char **av);
int	check_bracket(char *);
int	check_op(char *);
int	check_op2(char *);
int	check_bracket2(char *);
int	infin_do_op(t_nbr *, t_nbr *, int, char);
int	my_init_zero(t_nbr *);
int	my_sub_zero(t_nbr *);
int	my_struct_cut(t_nbr *, t_nbr *);
int	my_init_sum(t_nbr *, t_nbr *, t_nbr *);
int	my_init_prod(t_nbr *, t_nbr *, t_nbr *);
int	my_init_div(t_nbr *, t_nbr *, t_nbr *);

#endif /* BISTROMATIQUE_H_ */
