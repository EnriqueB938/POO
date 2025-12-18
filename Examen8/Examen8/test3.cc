#include "set.h"
#include "gtest/gtest.h"
#include <sstream>

TEST(Set, Constructor)
{
    Set s("SET1", "Tool Set");
    EXPECT_EQ("SET1", s.GetId());
    EXPECT_EQ("Tool Set", s.GetName());
}

TEST(Set, AddTool)
{
    Set s("SET1", "Tool Set");
    Tool t1("id1", "name1", "maker1");
    EXPECT_TRUE(s.AddTool(t1));
    EXPECT_FALSE(s.AddTool(t1)); // Adding the same tool again should fail
    EXPECT_EQ(1, s.GetTotalTools());
}

TEST(Set, RemoveTool)
{
    Set s("SET1", "Tool Set");
    Tool t1("id1", "name1", "maker1");
    Tool t2("id2", "name2", "maker2");
    s.AddTool(t1);
    s.AddTool(t2);

    EXPECT_TRUE(s.RemoveTool("id1"));
    EXPECT_EQ(1, s.GetTotalTools());
    EXPECT_FALSE(s.RemoveTool("id3")); // Removing non-existent tool
}

TEST(Set, GetBest)
{
    Set s("SET1", "Tool Set");
    Tool t1("id1", "name1", "maker1");
    Tool t2("id2", "name2", "maker2");
    Tool t3("id3", "name3", "maker3");

    t1.SetRating(2);
    t2.SetRating(4);
    t3.SetRating(5);

    s.AddTool(t1);
    s.AddTool(t2);
    s.AddTool(t3);

    EXPECT_EQ(2, s.GetBest());
}

TEST(Set, PrintCatalog)
{
    Set s("SET1", "Tool Set");
    Tool t1("id1", "name1", "maker1");
    Tool t2("id2", "name2", "maker2");
    Tool t3("id3", "name3", "maker3");
    Tool t4("id4", "name4", "maker4");

    t1.SetRating(2);
    t2.SetRating(4);
    t3.SetRating(3);
    t4.SetRating(5);

    s.AddTool(t1);
    s.AddTool(t2);
    s.AddTool(t3);
    s.AddTool(t4);

    std::ostringstream oss;
    std::streambuf *old_cout = std::cout.rdbuf(oss.rdbuf());

    s.PrintCatalog();

    std::cout.rdbuf(old_cout);

    std::string expected_output =
        "\n"
        "0/id1: name1, maker1, 2\n"
        "1/id2: name2, maker2, 4\n"
        "2/id3: name3, maker3, 3\n"
        "3/id4: name4, maker4, 5\n"
        "BEST: 2\n"
        "1/id2: name2, maker2, 4\n"
        "3/id4: name4, maker4, 5\n";

    EXPECT_EQ(expected_output, oss.str());
}
