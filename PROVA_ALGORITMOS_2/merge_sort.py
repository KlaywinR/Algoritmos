class ListNode(object):
    """
    Nó de uma lista encadeada, onde cada um armazena uma referência para o próximo nó da lista.
    """
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

class Solution(object):
    """
    Primeiramente, inicia-se o nó com um valor X e uma referência para próximo.
        - val: Valor Y armazenado no nó.
        - next: Referência usada para o nó seguinte.
    """
    def merge_two_list(self, list1, list2):
        assistant = ListNode(0)
        actual= assistant
        
        while list1 and list2:
            if list1.val <= list2.val:
                actual.next = list1
                list1 = list1.next
                
            else:
                actual.next = list2
                list2 = list2.next
            actual = actual.next
            
        actual.next = list1 or list2
        
        return assistant.next
        
            
            