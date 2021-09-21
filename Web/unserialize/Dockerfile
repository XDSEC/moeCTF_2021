FROM php:7.2-apache

USER www-data
COPY ./flag /flag
COPY ./index.php /var/www/html

CMD ["apache2-foreground"]
