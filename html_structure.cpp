#include <iostream>
#include <vector>

using namespace std;

struct htmlnode {
    string tag;
    string content;
    vector<htmlnode*> children;

    htmlnode(string t, string c = "") : tag(t), content(c) {}

    void addchild(htmlnode* child) {
        children.push_back(child);
    }

    void printhtml(int depth = 0) {
        for (int i = 0; i < depth; i++) cout << " ";
        cout << "<" << tag << ">";
        if (!content.empty()) cout << content;
        cout << endl;

        for (htmlnode* child : children) {
            child->printhtml(depth + 1);
        }

        for (int i = 0; i < depth; i++) cout << " ";
        cout << "</" << tag << ">" << endl;
    }

    ~htmlnode() {
        for (htmlnode* child : children) {
            delete child;
        }
    }
};

int main() {
    htmlnode* root = new htmlnode("html");
    htmlnode* head = new htmlnode("head");
    htmlnode* body = new htmlnode("body");

    root->addchild(head);
    root->addchild(body);

    htmlnode* h1 = new htmlnode("h1", "This is a heading 1");
    htmlnode* p = new htmlnode("p", "This is a paragraph.");
    htmlnode* h3 = new htmlnode("h3", "This is a heading 3.");
    htmlnode* h4 = new htmlnode("h4", "This is a heading 4.");
    htmlnode* img = new htmlnode("img", "This is an image.");

    body->addchild(h1);
    body->addchild(p);
    body->addchild(h3);
    body->addchild(h4);
    body->addchild(img);

    root->printhtml();

    delete root;

    return 0;
}
