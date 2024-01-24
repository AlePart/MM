#include <ActionMenuItem.hpp>


ActionMenuItem::ActionMenuItem(std::string text, std::shared_ptr<MenuItem> parent, std::function<void()> action) :
    TextItem(text, parent)
{
    m_action = action;
}

ActionMenuItem::ActionMenuItem(std::string text, std::shared_ptr<MenuItem> parent, std::shared_ptr<MenuItem> left, std::shared_ptr<MenuItem> right, std::function<void()> action):
    TextItem(text, parent, left, right)
{
    m_action = action;
  
}

void ActionMenuItem::Action()
{
    m_action();
}






