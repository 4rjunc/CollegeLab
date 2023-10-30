from django.shortcuts import render, redirect
from .forms import BookForm
from .models import Book

def add_book(request):
    if request.method == "POST":
        form = BookForm(request.POST)
        print(request.POST)
        if form.is_valid():
            form.save()
            return redirect('list_books')
    else:
        form = BookForm()
    return render(request, 'book/add_book.html', {'form': form})

def list_books(request):
    books = Book.objects.all()
    print(books)
    return render(request, 'book/list_book.html', {'books': books})

def index(request):
    return render(request, 'book/index.html')