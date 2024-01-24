#include <TextItem.hpp>

#include <catch2/catch_test_macros.hpp>

TEST_CASE("TextItem::TextItem(std::string text, std::shared_ptr<MenuItem> parent, std::shared_ptr<MenuItem> left, std::shared_ptr<MenuItem> right)", "[TextItem][TextItem(std::string text, std::shared_ptr<MenuItem> parent, std::shared_ptr<MenuItem> left, std::shared_ptr<MenuItem> right)]")
{
    std::string text = "text";
    std::shared_ptr<MenuItem> parent = std::make_shared<MenuItem>("parent", nullptr);
    std::shared_ptr<MenuItem> left = std::make_shared<MenuItem>("left", nullptr);
    std::shared_ptr<MenuItem> right = std::make_shared<MenuItem>("right", nullptr);
    TextItem* textItem = new TextItem(text, parent, left, right);
    REQUIRE(textItem->GetText() == text);
}


TEST_CASE("TextItem::TextItem(std::string text, std::shared_ptr<MenuItem> parent)", "[TextItem][TextItem(std::string text, std::shared_ptr<MenuItem> parent)]")
{
    std::string text = "text";
    std::shared_ptr<MenuItem> parent = std::make_shared<MenuItem>("parent", nullptr);
    TextItem* textItem = new TextItem(text, parent);
    REQUIRE(textItem->GetText() == text);
}

