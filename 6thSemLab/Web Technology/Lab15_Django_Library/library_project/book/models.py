from django.db import models

class Book(models.Model):
    title = models.CharField(max_length=100)
    author = models.CharField(max_length=100)
    shelf_no = models.IntegerField()

    def __str__(self):
        return self.title
