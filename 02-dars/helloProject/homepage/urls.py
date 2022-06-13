from .views import HOmePageView
from django.urls import path

urlpatterns = [
    path('', HOmePageView, name = 'home')
]