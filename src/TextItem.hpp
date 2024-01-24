#ifndef TEXTITEM_HPP
#define TEXTITEM_HPP

#include <ITextItem.hpp>
#include <MenuItem.hpp>

class TextItem : public MenuItem, public ITextItem
{
public:
    TextItem(std::string text, std::shared_ptr<IMenuItem> parent);
    TextItem(std::string text, std::shared_ptr<IMenuItem> parent, std::shared_ptr<MenuItem> left, std::shared_ptr<MenuItem> right);
    std::string GetText() const override;
    virtual ~TextItem() = default;

private:
    std::string m_text;
};

#endif //TEXTITEM_HPP