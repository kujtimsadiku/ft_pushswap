#include "../include/ft_pushswap.h"

void	InitializeStack(t_data *data)
{
	data->i = 0;
}

// i need to read the input stdinput
// take the string and split it ft_stringsplit(' ');
// check the numbers are not floats. in this we dont need them.
// check there are no unnecessary thins inside. if its character print error
// take the ammount that we are going to malloc for stackA and stack B but
// for not using too much of memory on stack b we can divide the memory by 2-4 or more
// no need to free until the end. its waste of time to allocate 
// memory all the time when we still are going to that same ammount memory

int		IsNumber(int ac, char **av)
{
	int	i, j;

	i = 1;
	j = 0;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] == '-')
				j++;
			if (!ft_isdigit(av[i][j]))
				STDInputError("Error!");
			j++;
		}
		i++;
	}
	return (TRUE);
}

void	MemoryAllocation(t_data *data)
{
	stackA.stack = (int *)malloc(sizeof(int) * data->stackMemory);
	if (stackA.stack == NULL)
		STDInputError("Error!");
	stackA.size = data->stackMemory;
	stackA.top = data->stackMemory - 1;

	stackB.stack = (int *)malloc(sizeof(int) * data->stackMemory);
	if (stackA.stack == NULL)
		STDInputError("Error!");
	stackB.size = data->stackMemory;
	stackB.top = data->stackMemory - 1;
}

void	STDInputError(char *error)
{
	ft_putstr_fd(error, 2);
	exit(0);
}

void	FillTheStack(int ac, char **av)
{
	long long	bigINT;
	int			i;

	i = 1;
	bigINT = 0;
	while (i < ac)
	{
		bigINT = ft_atoi(av[i]);
		if (bigINT > MAX_INT || bigINT < MIN_INT)
			STDInputError("Error!");
		stackA.stack[i] = bigINT;
		i++;
	}
}

void	ReadSTDInput(t_data *data, int ac, char **av)
{
	IsNumber(ac, av);
	data->stackMemory = ac - 1;
	MemoryAllocation(data);
	FillTheStack(ac, av);
	if (!containsDuplicate(stackA.stack, stackA.size))
		STDInputError("Duplicated number --- 2!");
}

int		Max(int maxMin, int maxMax)
{
	int max = maxMax > maxMin ? maxMax : maxMin;
	return (max);
}

int	main(int ac, char **av)
{
	t_data data;

	if (ac > 2)
	{
		ReadSTDInput(&data, ac, av);
	}
	free(*(&stackA.stack));
	free(*(&stackB.stack));
	system("leaks a.out");
	return (0);
}