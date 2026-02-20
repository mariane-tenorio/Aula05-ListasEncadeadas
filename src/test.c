Node* create_list() {
    Node* head = malloc(sizeof(Node));

    head->element = 30;
    head->next = malloc(sizeof(Node));
    head->next->element = 10;
    head->next->next = malloc(sizeof(Node));
    head->next->next->element = 15;
    head->next->next->next = NULL;

    return head;

}

void print_list(Node* head) {
    Node* cur = head;

    while (cur != NULL) {
        element_print(cur->element);
        cur = cur->next;
    }
    printf("\n");
}

int main(void) {
    Node* head = create_list();
    print_list(head);
}