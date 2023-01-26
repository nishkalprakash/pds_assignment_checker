typedefstruct{
inthiTemp;
intloTemp;
double precip;

}WeatherData;
int main ( ) 
{
int numdays;
WeatherData*days;
scanf(“%d”, &numdays) ;
days=(WeatherData *)malloc (sizeof(WeatherData)*numdays);
if (days == NULL) printf(“Insufficient memory\n”);
...
free (days);
}
