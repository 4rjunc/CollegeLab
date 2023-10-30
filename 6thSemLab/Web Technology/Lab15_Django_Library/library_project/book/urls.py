from django.urls import path
from . import views


urlpatterns = [
path('add_book/', views.add_book, name='add_book'), 
path('list_books/', views.list_books, name='list_books'), 
path('', views.index, name='index'),
]