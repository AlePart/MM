#include <IMenuItem.hpp>

class IActionMenuItem : public IMenuItem
{
public:
    virtual void Action() = 0;
    virtual ~IActionMenuItem() = default;
};