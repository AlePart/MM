
#include <TextItem.hpp>
#include <IActionMenuItem.hpp>
#include <functional>
class ActionMenuItem : public TextItem, public IActionMenuItem
{
public:
    ActionMenuItem(std::string text, std::shared_ptr<MenuItem> parent, std::function<void()> action);   
    ActionMenuItem(std::string text, std::shared_ptr<MenuItem> parent, std::shared_ptr<MenuItem> left, std::shared_ptr<MenuItem> right, std::function<void()> action);
    virtual void Action();
    virtual ~ActionMenuItem() = default;
private:
    std::function<void()> m_action;

};