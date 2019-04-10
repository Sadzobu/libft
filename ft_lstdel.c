#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
    if (alst)
    {
        if (*alst)
        {
            while ((*alst)->next)
            {
                del((*alst)->content, (*alst)->content_size);
                *alst = (*alst)->next;
            }
            del((*alst)->content, (*alst)->content_size);
            *alst = NULL;
        }
    }
}
