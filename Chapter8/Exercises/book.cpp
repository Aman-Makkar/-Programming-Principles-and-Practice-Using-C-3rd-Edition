#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Book
{
public:
  enum class Genre
  {
    unknown,
    fiction,
    nonfiction,
    periodical,
    biography,
    children
  };
  Book();
  Book(string ISBN, string title, string author, int copyright_date, Genre genre = Genre::unknown);

  string get_isbn() const { return isbn; }
  string get_title() const { return title; }
  string get_author() const { return author; }
  int get_copyright() const { return copyright_date; }
  Genre get_genre() const { return genre; }
  bool is_checked_out() const { return checked_out; }

  void check_inout(bool cio) { checked_out = cio; }

  friend std::ostream &operator<<(std::ostream &os, const Book &b);
  friend bool operator==(const Book &b1, const Book &b2);
  friend bool operator!=(const Book &b1, const Book &b2);

private:
  string isbn;
  string title;
  string author;
  int copyright_date;
  bool checked_out;
  Genre genre;
  bool isbn_valid() const;
};

Book::Book()
    : isbn("0-0-0-x"),
      title("?"),
      author("?"),
      copyright_date(9999),
      checked_out(false),
      genre(Genre::children)
{
}

Book::Book(std::string ISBN, std::string title, std::string author, int copyright_year, Genre genre)
    : isbn(ISBN), title(title), author(author), copyright_date(copyright_year), genre(genre), checked_out(false)
{
  if (!isbn_valid())
    throw std::runtime_error("Invalid ISBN");
}

bool Book::isbn_valid() const
{
  std::stringstream ss;
  ss << isbn;
  int n1{}, n2{}, n3{};
  char c1{}, c2{}, c3{}, c4{};
  ss >> n1 >> c1 >> n2 >> c2 >> n3 >> c3 >> c4;
  if (ss.good() && c1 == '-' && c2 == '-' && c3 == '-' && isalnum(c4))
  {
    return true;
  }
  return false;
}

ostream &operator<<(ostream &os, const Book &b)
{
  os << "TITLE: " << b.title << '\n'
     << "AUTHOR: " << b.author << '\n'
     << "ISBN: " << b.isbn;
  return os;
}

bool operator==(const Book &b1, const Book &b2)
{
  return b1.isbn == b2.isbn;
}

bool operator!=(const Book &b1, const Book &b2)
{
  return !(b1 == b2);
}