from abc import ABC, abstractmethod

class Car(ABC):
    def __init__(self, color: str):
        self.color = color