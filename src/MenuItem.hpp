#include <IMenuItem.hpp>

class MenuItem : public IMenuItem
{
public:
    MenuItem(std::string text, std::shared_ptr<IMenuItem> parent);
    MenuItem(std::string text, std::shared_ptr<IMenuItem> parent, std::shared_ptr<MenuItem> left, std::shared_ptr<MenuItem> right);
    std::shared_ptr<IMenuItem> GetParent() const override;
    std::shared_ptr<IMenuItem> Next() const override;
    std::shared_ptr<IMenuItem> Previous() const override;
    void SetLeft(std::shared_ptr<IMenuItem> left) override;
    void SetRight(std::shared_ptr<IMenuItem> right) override;
    virtual ~MenuItem() = default;
private:
    std::string m_text;
    std::shared_ptr<IMenuItem> m_parent;
    std::shared_ptr<IMenuItem> m_left;
    std::shared_ptr<IMenuItem> m_previous;
};


