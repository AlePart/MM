#ifndef __IACTIONMENUITEM_HPP__
#define __IACTIONMENUITEM_HPP__

#include <IMenuItem.hpp>

class IActionMenuItem : public IMenuItem
{
public:
    virtual void Action() = 0;
    virtual ~IActionMenuItem() = default;
};


#endif //__IACTIONMENUITEM_HPP__