#pragma once
#include <iostream>
#define DOCTEST_CONFIG_IMPLEMENT
#include "doctest.h"
#include "Library.h"

TEST_CASE("testing Vector")
{
    Vector<int> a;
    a.pushBack(5);
    CHECK(a[0] == 5);
}

TEST_CASE("testing String")
{
    String n = "kiro";
    
    CHECK(n == "kiro");
}

TEST_CASE("testing String")
{
    String n = "kiro";
    
    CHECK(n[0] == 'k');
}


TEST_CASE("testing User")
{
    User a;
    String name = "kiro g";
    
    a.setName(name);
    CHECK(a.getName() == name);
}
TEST_CASE("testing Book")
{
    Book a;
    String author = "kiro";
    
    a.setAuthor(author);
    CHECK(a.getAuthor() == author);
}

TEST_CASE("testing Library book")
{
    Library a;
    String author = "kiro";
    String name ("ko");
    String genre = "staa";
    String shortDes = "staa";
    String keywords = "kkkkkk";
    size_t year = 200;
    size_t rate = 50;
    a.addTestBook(author,name,genre,shortDes,keywords,year,rate);
    CHECK(a.getBooks()[0].getAuthor() == author);
}

TEST_CASE("testing Library user")
{
    Library a;
    String name ("ko");
    String pass = "kkkkkk";
    bool ad = 1;
    a.addTestUser(name,pass,ad);
    CHECK(a.getUsers()[0].getName() == name );
}


void runtests() {
    doctest::Context().run();
}
