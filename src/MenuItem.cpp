#include <MenuItem.hpp>


MenuItem::MenuItem(std::string text, std::shared_ptr<IMenuItem> parent)
{
    m_text = text;
    m_parent = parent;
    m_left = nullptr;
    m_previous = nullptr;
}

MenuItem::MenuItem(std::string text, std::shared_ptr<IMenuItem> parent, std::shared_ptr<MenuItem> left, std::shared_ptr<MenuItem> right)
{
    m_text = text;
    m_parent = parent;
    m_left = left;
    m_previous = right;
}

std::shared_ptr<IMenuItem> MenuItem::GetParent() const
{
    return m_parent;
}

std::shared_ptr<IMenuItem> MenuItem::Next() const
{
    return m_left;
}

std::shared_ptr<IMenuItem> MenuItem::Previous() const
{
    return m_previous;
}

void MenuItem::SetLeft(std::shared_ptr<IMenuItem> left)
{
    m_left = left;
}

void MenuItem::SetRight(std::shared_ptr<IMenuItem> right)
{
    m_previous = right;
}


