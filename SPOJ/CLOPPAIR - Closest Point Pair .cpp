#include <bits/stdc++.h>
using namespace std;


double distance_between_two_points(double x1, double y1, double x2, double y2) {
    double delta_x = x1 - x2;
    double delta_y = y1 - y2;
    return sqrt(delta_x * delta_x + delta_y * delta_y);
}

tuple<double, int, int> closest_pair_split(pair<pair<int, int >,int>lst[], int l, int mid1, int mid2, int r, double d, int point_1, int point_2){
    double min_x = (get<0>(get<0>(lst[mid1])) + get<0>(get<0>(lst[mid2]))) / 2 - d;
    double max_x = (get<0>(get<0>(lst[mid1])) + get<0>(get<0>(lst[mid2]))) / 2 + d;
    vector<pair<pair<int,int >, int>> valid_strip_left;
    vector<pair<pair<int ,int >, int>> valid_strip_right;
    for (int i = l; i <= r; i++){
        if (get<0>(get<0>(lst[i])) >= min_x && i <= mid1) valid_strip_left.push_back(lst[i]);
        if (get<0>(get<0>(lst[i])) <= max_x && i >= mid2) valid_strip_right.push_back(lst[i]);
    }
    for(int i = 0; i<valid_strip_left.size();i++) {
        for (int j = 0; j < valid_strip_right.size(); j++) {
            if (get<0>(get<0>(valid_strip_right[j])) - get<0>(get<0>(valid_strip_left[i])) > d) break;
            double distance = distance_between_two_points(get<0>(get<0>(valid_strip_right[j])), get<1>(get<0>(valid_strip_right[j])), get<0>(get<0>(valid_strip_left[i])), get<1>(get<0>(valid_strip_left[i])));
            d = min(d, distance);
            if (d == distance) {
                point_1 = get<1>(valid_strip_left[i]);
                point_2 = get<1>(valid_strip_right[j]);
            }
        }
    }
    return make_tuple(d, point_1, point_2);
}


tuple<double, int, int> closest_pair(pair<pair<int, int >,int>lst[], int l, int r) {
    if (r - l == 0) {
        return make_tuple(INT_MAX, get<1>(lst[l]), get<1>(lst[r]));
    }
    if (r - l == 1) {
        return make_tuple(distance_between_two_points(get<0>(get<0>(lst[r])),get<1>(get<0>(lst[r])),get<0>(get<0>(lst[l])), get<1>(get<0>(lst[l]))), get<1>(lst[l]), get<1>(lst[r]));
    }
    tuple<double, int, int> right_side_closest = closest_pair(lst, l, (r - l) / 2 + l);
    tuple<double, int, int> left_side_closest = closest_pair(lst, (r - l) / 2 + l + 1, r);
    double d = min(get<0>(right_side_closest), get<0>(left_side_closest));
    int point_1, point_2;
    if (d == get<0>(right_side_closest)) {
        point_1 = get<1>(right_side_closest);
        point_2 = get<2>(right_side_closest);
    }
    else {
        point_1 = get<1>(left_side_closest);
        point_2 = get<2>(left_side_closest);
    }
    tuple<double, int, int>split_closest = closest_pair_split(lst, l, (r - l) / 2 + l, (r - l) / 2 + l + 1, r, d, point_1, point_2);
    return split_closest;
}

tuple<double, int, int> naive_count(pair<pair<int, int >,int>lst[], int n){
    double d = INT_MAX;
    int p1 = 0 , p2 = 0;
    for (int i = 0 ; i < n ; i++)
    {
        for (int j = i +1 ; j< n ; j++)
        {
            double distance = distance_between_two_points(get<0>(get<0>(lst[i])), get<1>(get<0>(lst[i])),get<0>(get<0>(lst[j])), get<1>(get<0>(lst[j])));
            if (distance < d){
                d = distance;
                p1 = get<1>(lst[i]);
                p2 = get<1>(lst[j]);
            }
        }
    }
    return make_tuple(d, p1, p2);
}
int main(){
    int n;
    cin >> n;
    pair<pair<int,int>,int>points[n];
    for (int i = 0; i<n; i++){
        int x, y;
        cin >>x >>y;
        pair<int, int >point = make_pair(x, y);
        pair<pair<int, int >,int>insert = make_pair(point, i);
        points[i]=insert;
    }
    sort(points, points + n);
    tuple<double, int, int> answer = closest_pair(points, 0, n - 1);
    int point_1 = get<1>(answer);
    int point_2 = get<2>(answer);
    answer = make_tuple(get<0>(answer), min(point_1, point_2), max(point_1, point_2));
    cout << get<1>(answer) << " " << get<2>(answer) << " " << fixed << setprecision(6) << get<0>(answer);
//    for(int q = 0 ; q<=1000 ; q++) {
//        int n = rand() % 10000;
//        pair<pair<int, int>, int> points[n];
//        for (int i = 0; i < n; i++) {
//            int x = rand() % 10000000;
//            int y = rand() % 10000000;
//            pair<int, int> point = make_pair(x, y);
//            pair<pair<int, int>, int> insert = make_pair(point, i);
//            points[i] = insert;
//        }
//        tuple<double, int, int> Canswer = naive_count(points, n);
//        sort(points, points + n);
//        tuple<double, int, int> answer = closest_pair(points, 0, n - 1);
//        int point_1 = get<1>(answer);
//        int point_2 = get<2>(answer);
//        answer = make_tuple(get<0>(answer), min(point_1, point_2), max(point_1, point_2));
//        cout << bool(Canswer == answer) << " : " << get<0>(Canswer) << " "<< get<1>(Canswer)<< " " << get<2>(Canswer)<< " : " << get<0>(answer) << " "<< get<1>(answer)<< " " << get<2>(answer)<<endl;
//    }
}
