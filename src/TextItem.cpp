#include <TextItem.hpp>


TextItem::TextItem(std::string text, std::shared_ptr<IMenuItem> parent) :
    MenuItem(text, parent), ITextItem()
{
    m_text = text;

}

TextItem::TextItem(std::string text, std::shared_ptr<IMenuItem> parent, std::shared_ptr<MenuItem> left, std::shared_ptr<MenuItem> right) :
    MenuItem(text, parent, left, right), ITextItem()
{
    m_text = text;
}

std::string TextItem::GetText() const
{
    return m_text;
}

