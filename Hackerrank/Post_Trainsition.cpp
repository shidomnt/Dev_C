#include <stdio.h>
#include <stdlib.h>
#define MAX_STRING_LENGTH 6

struct package
{
	char* id;
	int weight;
};

typedef struct package package;

struct post_office
{
	int min_weight;
	int max_weight;
	package* packages;
	int packages_count;
};

typedef struct post_office post_office;

struct town
{
	char* name;
	post_office* offices;
	int offices_count;
};

typedef struct town town;



void print_all_packages(town t) {
	
}

void send_all_acceptable_packages(town* source, int source_office_index, town* target, int target_office_index) {	
}

town town_with_most_packages(town* towns, int towns_count) {
}

town* find_town(town* towns, int towns_count, char* name) {
}

int main()
{
    //Nhap so luong town
	int towns_count;
	scanf("%d", &towns_count);
    //Khai báo mảng chứa thông tin tất cả town
	town* towns = (town*)malloc(sizeof(town)*towns_count);
    //Vong lap de nhap thong tin cho town 0 den towns_count - 1 
	for (int i = 0; i < towns_count; i++) {
        //Khai bao mang chua ten town
		towns[i].name = (char*)malloc(sizeof(char) * MAX_STRING_LENGTH);
        //Nhập tên của town thứ i i
		scanf("%s", towns[i].name);
        //Nhập số lượng office của town thứ i
		scanf("%d", &towns[i].offices_count);
        //Khai báo mảng chứa thông tin của toàn bộ office của town thứ i
		towns[i].offices = (post_office*)malloc(sizeof(post_office)*towns[i].offices_count);
        //Vòng lặp để nhập thông tin cho mỗi office trong town thứ i
		for (int j = 0; j < towns[i].offices_count; j++) {
            //Nhập thông tin vê <packages_count , min_weight , max_weight> của office thứ j
			scanf("%d%d%d", &towns[i].offices[j].packages_count, &towns[i].offices[j].min_weight, &towns[i].offices[j].max_weight);
            //Khai báo mảng chứa thông tin của từng package trong office j
			towns[i].offices[j].packages = (package*)malloc(sizeof(package)*towns[i].offices[j].packages_count);
            //Vòng lặp nhập thông tin cho từng package
			for (int k = 0; k < towns[i].offices[j].packages_count; k++) {
				//Cấp bộ nhớ cho xâu id
				towns[i].offices[j].packages[k].id =(char*) malloc(sizeof(char) * MAX_STRING_LENGTH);
				scanf("%s", towns[i].offices[j].packages[k].id);
				scanf("%d", &towns[i].offices[j].packages[k].weight);
			}
		}
	}
	int queries;
	scanf("%d", &queries);
	char town_name[MAX_STRING_LENGTH];
	while (queries--) {
		int type;
		scanf("%d", &type);
		switch (type) {
		case 1:
			scanf("%s", town_name);
			town* t = find_town(towns, towns_count, town_name);
			print_all_packages(*t);
			break;
		case 2:
			scanf("%s", town_name);
			town* source = find_town(towns, towns_count, town_name);
			int source_index;
			scanf("%d", &source_index);
			scanf("%s", town_name);
			town* target = find_town(towns, towns_count, town_name);
			int target_index;
			scanf("%d", &target_index);
			send_all_acceptable_packages(source, source_index, target, target_index);
			break;
		case 3:
			printf("Town with the most number of packages is %s\n", town_with_most_packages(towns, towns_count).name);
			break;
		}
	}
	for (int i = 0; i < towns_count; i++) {
        for (int j = 0; j < towns[i].offices_count; j++) {
            for (int k = 0; k < towns[i].offices[j].packages_count; k++) {
                free(towns[i].offices[j].packages[k].id);
            }
            free(towns[i].offices[j].packages);
        }
        free(towns[i].offices);
        free(towns[i].name);
    }
    free(towns);
	return 0;
}