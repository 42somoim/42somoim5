#include <list>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

void	ft_Left(list<char>::iterator *cs_iter, list<char>::iterator begin_iter)
{
	if (*cs_iter != begin_iter) (*cs_iter)--;
	return ;
}

void	ft_D(list<char>::iterator *cs_iter, list<char>::iterator end_iter)
{
	if (*cs_iter != end_iter) (*cs_iter)++;
	return ;
}

void	ft_Backspace(list<char>::iterator cs_iter, list<char> *l)
{
	if (cs_iter == (*l).begin()) return ;
	cs_iter--;
	(*l).erase(cs_iter);
	return ;
}

int	main(void)
{
	list<char>		l;
	string      str;
	char			cmd;
	int			M;
	size_t			len;

	cin >>str;
	for(int i=0; i<str.size(); i++){
      l.push_back(str[i]);
   }
	list<char>::iterator	cs_iter = l.end();
	cin >>M;
	while (M--)
	{
		cin>>cmd;
		if (cmd == 'L') ft_Left(&cs_iter, l.begin());
		else if (cmd == 'D') ft_D(&cs_iter, l.end());
		else if (cmd == 'B') ft_Backspace(cs_iter, &l);
		else if (cmd == 'P'){
         cin>>cmd;
         l.insert(cs_iter, cmd);
      }
	}
   for(cs_iter=l.begin(); cs_iter!=l.end(); cs_iter++){
      cout<<*cs_iter;
   }
	return (0);
}